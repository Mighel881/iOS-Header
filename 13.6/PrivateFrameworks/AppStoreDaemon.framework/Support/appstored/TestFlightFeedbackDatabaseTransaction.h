//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TestFlightFeedbackDatabaseSession.h"

#import "SQLiteDatabaseTransaction-Protocol.h"

@class NSString, SQLiteConnection;

@interface TestFlightFeedbackDatabaseTransaction : TestFlightFeedbackDatabaseSession <SQLiteDatabaseTransaction>
{
}


// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

