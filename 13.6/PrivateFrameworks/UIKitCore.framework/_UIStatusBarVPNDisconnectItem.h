//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class NSTimer, _UIStatusBarVPNDisconnectView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVPNDisconnectItem : _UIStatusBarItem
{
    _UIStatusBarVPNDisconnectView *_disconnectView;
    NSTimer *_slashBeginTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *slashBeginTimer; // @synthesize slashBeginTimer=_slashBeginTimer;
@property(retain, nonatomic) _UIStatusBarVPNDisconnectView *disconnectView; // @synthesize disconnectView=_disconnectView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_disconnectView;
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)dependentEntryKeys;

@end

