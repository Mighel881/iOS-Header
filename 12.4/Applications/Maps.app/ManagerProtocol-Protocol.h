//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DirectionsController, DirectionsManager, GEOMapServiceTraits, MapSelectionManager, PersonalizedItemManager, PersonalizedItemSource, RouteAnnotationsController, SearchPinsManager, SettingsController, VenueCardCoordinator, VenuesManager;
@protocol MapCameraFraming;

@protocol ManagerProtocol <NSObject>
- (VenueCardCoordinator *)venueCardCoordinator;
- (VenuesManager *)venuesManager;
- (id <MapCameraFraming>)mapCameraController;
- (PersonalizedItemSource *)suggestionsItemSource;
- (PersonalizedItemManager *)personalizedItemManager;
- (MapSelectionManager *)mapSelectionManager;
- (GEOMapServiceTraits *)newTraits;
- (RouteAnnotationsController *)routeAnnotationsController;
- (DirectionsController *)directionsController;
- (DirectionsManager *)directionsManager;
- (SearchPinsManager *)searchPinsManager;
- (SettingsController *)settingsController;
@end

