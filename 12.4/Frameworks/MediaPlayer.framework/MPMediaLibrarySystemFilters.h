//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaLibraryView;

@interface MPMediaLibrarySystemFilters : NSObject
{
    MPMediaLibraryView *_libraryView;
    _Bool _shouldExcludePurchaseHistoryContent;
}

+ (id)sharedSystemFilters;
- (void).cxx_destruct;
- (void)_updateFilters;
- (void)_cloudLibraryAvailabilityDidChange:(id)arg1;
- (_Bool)shouldExcludePurchaseHistoryContentForLibrary:(id)arg1;
- (id)_init;

@end

