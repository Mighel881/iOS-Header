//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class NSString;

@interface LocalApproveRequestTask : AMSTask
{
    NSString *_itemIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (id)_parseResult:(id)arg1;
- (id)_serverRequestWithUser:(id)arg1 requestIdentifier:(id)arg2 error:(id *)arg3;
- (id)perform;
- (id)initWithItemIdentifier:(id)arg1;

@end

