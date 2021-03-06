//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapLayoutResult-Protocol.h>

@class NSMutableOrderedSet, NSOrderedSet, NSString, PXPlacesMapViewPort;

@interface PXPlacesMapLayoutResultImpl : NSObject <PXPlacesMapLayoutResult>
{
    PXPlacesMapViewPort *_viewPort;
    NSMutableOrderedSet *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableOrderedSet *items; // @synthesize items=_items;
@property(retain, nonatomic) PXPlacesMapViewPort *viewPort; // @synthesize viewPort=_viewPort;
@property(readonly, nonatomic) NSOrderedSet *layoutItems;
- (void)removeItem:(id)arg1;
- (void)addItems:(id)arg1;
- (void)addItem:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

