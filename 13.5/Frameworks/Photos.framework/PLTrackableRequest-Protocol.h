//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSXPCConnection;
@protocol PLTrackableRequestDelegate;

@protocol PLTrackableRequest
@property(nonatomic) unsigned long long signpostID;
@property __weak id <PLTrackableRequestDelegate> delegate;
@property(readonly) NSString *taskIdentifier;
@property(readonly) NSXPCConnection *clientConnection;
- (void)runDaemonSide;
- (void)cancel;
@end

