//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PersonalizedItemSource.h"

@class GEOMapItemContainedPlace, NSArray, NSSet;
@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface PlaceCardLinkedPlacesItemSource : PersonalizedItemSource
{
    id <GEOMapItem> _geoMapItem;
    GEOMapItemContainedPlace *_containedPlace;
    NSArray *_linkedPlaces;
    NSSet *_linkedPlaceIdentifiers;
    unsigned long long _featureID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long featureID; // @synthesize featureID=_featureID;
- (id)allItems;
- (void)updateForPlaceCardItem:(id)arg1;

@end

