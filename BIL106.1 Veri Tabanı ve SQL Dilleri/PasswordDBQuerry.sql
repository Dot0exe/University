CREATE TABLE Users (
    UserID INT PRIMARY KEY IDENTITY(1,1),
    UserName VARCHAR(15) NOT NULL,
    UserPassword NVARCHAR(64) NOT NULL,
    Email VARCHAR(20) NOT NULL,
	CreationDate DATETIME DEFAULT GETDATE()
);

CREATE TABLE PasswordHistory (
    UserID INT PRIMARY KEY FOREIGN KEY REFERENCES Users,
    OldPassword NVARCHAR(64) NOT NULL,
    ChangeDate DATETIME DEFAULT GETDATE(),
);

CREATE TABLE PasswordSalts (
    SaltID INT PRIMARY KEY IDENTITY(1,1),
	UserID INT FOREIGN KEY REFERENCES Users,
    PasswordSalts NVARCHAR(16) NOT NULL,  
);