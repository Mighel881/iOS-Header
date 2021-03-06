//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject
{
    int _contentProtectionNotifyToken;
    NSManagedObjectContext *_managedObjectContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (_Bool)saveIfPossible;
- (_Bool)isProtectedDataAvailable;
- (void)contentDidUpdate:(id)arg1;
- (void)logMessage:(id)arg1;
- (id)databaseFilePath;
- (id)containerIdentifier;
- (id)cloudKitContainer;
- (id)managedObjectModelName;
- (void)storesWillChange:(id)arg1;
- (void)setupDatabase;
- (id)apsConnectionMachServiceName;
- (void)dealloc;
- (id)init;

@end

