//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScene;

__attribute__((visibility("hidden")))
@interface CoverSheetSceneAssociation : NSObject
{
    UIScene *_mapsScene;
    UIScene *_lockScreenScene;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScene *lockScreenScene; // @synthesize lockScreenScene=_lockScreenScene;
@property(readonly, nonatomic) UIScene *mapsScene; // @synthesize mapsScene=_mapsScene;
- (id)initWithMapsScene:(id)arg1;

@end

