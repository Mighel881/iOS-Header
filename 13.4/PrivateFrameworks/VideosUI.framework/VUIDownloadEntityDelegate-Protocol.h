//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSNumber, VUIDownloadEntity;

@protocol VUIDownloadEntityDelegate <NSObject>

@optional
- (void)downloadEntity:(VUIDownloadEntity *)arg1 numberOfItemsDownloadingDidChange:(NSNumber *)arg2;
- (void)downloadEntity:(VUIDownloadEntity *)arg1 numberOfItemsDidChange:(unsigned long long)arg2;
@end

