//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EMMessageListItemQueryResultsObserver-Protocol.h>
#import <Email/EMRecoverableObserver-Protocol.h>

@class EFCancelationToken, EFQuery, EMMessageRepository, EMObjectID, NSString;
@protocol EMQueryResultsObserver;

__attribute__((visibility("hidden")))
@interface _EMMessageRepositoryQueryObserver : NSObject <EMMessageListItemQueryResultsObserver, EMRecoverableObserver>
{
    EMMessageRepository *_repository;
    EFQuery *_query;
    EMObjectID *_observationIdentifier;
    id <EMQueryResultsObserver> _observer;
    EFCancelationToken *_token;
}

- (void).cxx_destruct;
- (void)observer:(id)arg1 matchedOldestItemsUpdatedForMailboxes:(id)arg2;
- (void)observerWillRestart:(id)arg1;
- (void)observer:(id)arg1 replacedExistingObjectID:(id)arg2 withNewObjectID:(id)arg3;
- (void)observerDidFinishRemoteSearch:(id)arg1;
- (void)observerDidFinishInitialLoad:(id)arg1;
- (void)observer:(id)arg1 matchedDeletedObjectIDs:(id)arg2;
- (void)observer:(id)arg1 matchedChangesForObjectIDs:(id)arg2;
- (void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 after:(id)arg3;
- (void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 before:(id)arg3;
- (void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 after:(id)arg3 extraInfo:(id)arg4;
- (void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 before:(id)arg3 extraInfo:(id)arg4;
- (void)observer:(id)arg1 wasUpdated:(id)arg2;
- (void)_performQueryWithRemoteConnection:(id)arg1 forRecovery:(_Bool)arg2;
- (void)recoverQueryWithRemoteConnection:(id)arg1;
- (void)performQueryWithRemoteConnection:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithRepository:(id)arg1 query:(id)arg2 observer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

