//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class NSError, VKTileProvider, VKTileSource;

@protocol VKTileProviderClient <NSObject>
- (long long)tileSource:(VKTileSource *)arg1 overrideForMaximumZoomLevel:(long long)arg2;
- (void)didStopLoadingTilesWithError:(NSError *)arg1;
- (void)willStartLoadingTiles;
- (void)tileProviderNeedsUpdate:(VKTileProvider *)arg1;
@end

