//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface ARUISpriteTexture : NSObject
{
    float _height;
    float _width;
    id <MTLTexture> _texture;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <MTLTexture> texture; // @synthesize texture=_texture;
@property(readonly, nonatomic) float width; // @synthesize width=_width;
@property(readonly, nonatomic) float height; // @synthesize height=_height;
- (id)initWithImage:(id)arg1;

@end

