//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVMultiStatusItem.h>

@class NSString;

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem
{
    NSString *_syncToken;
}

+ (id)copyParseRules;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
- (void)_setSyncTokenItem:(id)arg1;
- (id)description;

@end

