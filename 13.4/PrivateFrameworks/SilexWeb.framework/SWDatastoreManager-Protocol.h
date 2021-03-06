//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SilexWeb/NSObject-Protocol.h>

@class SWDatastore;
@protocol SWDatastoreObserver, SWSession;

@protocol SWDatastoreManager <NSObject>
@property(readonly, nonatomic) SWDatastore *datastore;
- (void)removeObserver:(id <SWDatastoreObserver>)arg1;
- (void)addObserver:(id <SWDatastoreObserver>)arg1;
- (void)updateDatastore:(SWDatastore *)arg1 originatingSession:(id <SWSession>)arg2;
@end

