//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPictureItemContainer-Protocol.h>

@class NSArray;

@interface GEOPictureItemContainer : NSObject <GEOPictureItemContainer>
{
    NSArray *_pictureItems;
    _Bool _allowFullScreenPhoto;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allowFullScreenPhoto; // @synthesize allowFullScreenPhoto=_allowFullScreenPhoto;
@property(readonly, nonatomic) NSArray *pictureItems; // @synthesize pictureItems=_pictureItems;
- (id)initWithPictureItemContainer:(id)arg1;
- (id)initWithPictureItems:(id)arg1 allowFullScreenPhoto:(_Bool)arg2;
- (id)init;

@end

