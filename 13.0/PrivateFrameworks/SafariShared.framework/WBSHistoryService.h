//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSXPCListenerDelegate-Protocol.h>

@class NSDate, NSString, NSURL, NSXPCListener, WBSHistoryDatabaseAccessBroker, WBSHistoryURLCompletionDataStore;
@protocol OS_dispatch_queue;

@interface WBSHistoryService : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_historyServiceQueue;
    NSDate *_initDate;
    WBSHistoryDatabaseAccessBroker *_databaseAccessBroker;
    WBSHistoryURLCompletionDataStore *_urlCompletionDataStore;
}

@property(readonly, nonatomic) WBSHistoryURLCompletionDataStore *urlCompletionDataStore; // @synthesize urlCompletionDataStore=_urlCompletionDataStore;
@property(readonly, nonatomic) WBSHistoryDatabaseAccessBroker *databaseAccessBroker; // @synthesize databaseAccessBroker=_databaseAccessBroker;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *databaseURL;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (_Bool)_connectionIsEntitledToUseUserDatabase:(id)arg1;
- (void)_shutdown;
- (void)_resume;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

