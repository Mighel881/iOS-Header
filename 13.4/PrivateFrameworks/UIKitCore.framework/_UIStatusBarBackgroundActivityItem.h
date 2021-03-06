//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarIndicatorItem.h>

@class _UIStatusBarPillView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBackgroundActivityItem : _UIStatusBarIndicatorItem
{
    _UIStatusBarPillView *_backgroundView;
}

+ (id)backgroundDisplayIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) _UIStatusBarPillView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_backgroundView;
- (_Bool)_shouldPulseForActivityType:(long long)arg1 traitCollection:(id)arg2;
- (id)_backgroundColorForActivityType:(long long)arg1;
- (id)_imageNameForActivityType:(long long)arg1;
- (id)_systemImageNameForActivityType:(long long)arg1;
- (id)imageNameForUpdate:(id)arg1;
- (id)systemImageNameForUpdate:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)_backgroundActivityViewForIdentifier:(id)arg1;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)indicatorEntryKey;

@end

