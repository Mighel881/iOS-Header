//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUNavigationBar.h>

#import <StoreKitUI/SKUIPositionAdjusting-Protocol.h>

@class NSString;

@interface SKUIScrollingTabNavigationBar : SUNavigationBar <SKUIPositionAdjusting>
{
    struct UIOffset _positionOffset;
}

@property(nonatomic) struct UIOffset positionOffset;
- (void)setFrame:(struct CGRect)arg1;
- (void)setCenter:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

