//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFActivity.h>

@class _SFFindOnPageView;

@interface _SFFindOnPageUIActivity : _SFActivity
{
    _SFFindOnPageView *_findOnPageView;
}

- (void).cxx_destruct;
- (void)activityDidFinish:(_Bool)arg1;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)_activityBundleImageConfiguration;
- (id)activityTitle;
- (id)activityType;
- (id)initWithFindOnPageView:(id)arg1;

@end

