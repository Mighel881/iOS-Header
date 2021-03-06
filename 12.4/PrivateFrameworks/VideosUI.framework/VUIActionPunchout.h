//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAction.h>

@class NSString, NSURL, VUIContentMetadata, WLKChannelDetails;

__attribute__((visibility("hidden")))
@interface VUIActionPunchout : VUIAction
{
    _Bool _isEntitledToPlay;
    _Bool _isPlaybackURL;
    NSURL *_punchoutURL;
    WLKChannelDetails *_channelDetails;
    VUIContentMetadata *_contentMetadata;
    NSString *_externalID;
    NSString *_referenceID;
    NSString *_canonicalID;
    NSString *_contentTitle;
}

@property(copy, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(nonatomic) _Bool isPlaybackURL; // @synthesize isPlaybackURL=_isPlaybackURL;
@property(retain, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(retain, nonatomic) NSString *referenceID; // @synthesize referenceID=_referenceID;
@property(retain, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(retain, nonatomic) VUIContentMetadata *contentMetadata; // @synthesize contentMetadata=_contentMetadata;
@property(nonatomic) _Bool isEntitledToPlay; // @synthesize isEntitledToPlay=_isEntitledToPlay;
@property(retain, nonatomic) WLKChannelDetails *channelDetails; // @synthesize channelDetails=_channelDetails;
@property(retain, nonatomic) NSURL *punchoutURL; // @synthesize punchoutURL=_punchoutURL;
- (void).cxx_destruct;
- (_Bool)isAccountRequired;
- (_Bool)_isValidAppInstalled;
- (void)_openPunchoutURL:(CDUnknownBlockType)arg1;
- (void)_openAirplayPicker:(CDUnknownBlockType)arg1;
- (void)_startAppInstallFlow:(CDUnknownBlockType)arg1;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1;

@end

