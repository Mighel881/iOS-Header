//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIAccessoryViewController.h>

@class TLKStoreButton;

@interface SearchUIAppStoreButtonViewController : SearchUIAccessoryViewController
{
    _Bool _appIsInstalled;
    TLKStoreButton *_appStoreButton;
}

+ (_Bool)supportsRowModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool appIsInstalled; // @synthesize appIsInstalled=_appIsInstalled;
@property(retain, nonatomic) TLKStoreButton *appStoreButton; // @synthesize appStoreButton=_appStoreButton;
- (unsigned long long)type;
- (_Bool)shouldTopAlignForAccessibilityContentSizes;
- (void)buttonPressed;
- (void)updateWithRowModel:(id)arg1;
- (id)setupView;

@end

