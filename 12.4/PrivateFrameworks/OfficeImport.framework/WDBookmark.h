//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDBookmark : WDRun
{
    NSString *mName;
    int mBookmarkType;
}

- (id)description;
- (void)setBookmarkType:(int)arg1;
- (int)bookmarkType;
- (int)runType;
- (void)dealloc;
- (void)setName:(id)arg1;
- (id)name;
- (id)initWithParagraph:(id)arg1 name:(id)arg2 type:(int)arg3;

@end

