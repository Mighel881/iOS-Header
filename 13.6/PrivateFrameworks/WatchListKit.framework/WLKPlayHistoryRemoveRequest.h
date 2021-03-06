//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKRequest.h>

@class NSString;

@interface WLKPlayHistoryRemoveRequest : WLKRequest
{
    NSString *_channelID;
    NSString *_bundleID;
    NSString *_externalID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithBundleID:(id)arg1 externalID:(id)arg2;

@end

