//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class IMKeyValueCollection, NSDictionary;

@protocol IMKeyValueCollectionDelegate <NSObject>

@optional
- (void)keyValueCollection:(IMKeyValueCollection *)arg1 didUpdateValues:(NSDictionary *)arg2;
- (void)keyValueCollection:(IMKeyValueCollection *)arg1 willUpdateValues:(NSDictionary *)arg2;
@end

