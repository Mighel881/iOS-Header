//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSUIDataUsageCategorySpecifier;

__attribute__((visibility("hidden")))
@interface PSUIDataUsageCategoryListController : PSListController
{
    PSUIDataUsageCategorySpecifier *_parentSpecifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PSUIDataUsageCategorySpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
- (_Bool)shouldReloadSpecifiersOnResume;
- (id)specifiers;
- (id)init;

@end

