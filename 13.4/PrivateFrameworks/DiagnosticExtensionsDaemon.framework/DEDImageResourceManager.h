//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, ResourceLoader;

@interface DEDImageResourceManager : NSObject
{
    ResourceLoader *_loader;
    NSMutableDictionary *_imageCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property(retain) ResourceLoader *loader; // @synthesize loader=_loader;
- (id)cachedImageFromKey:(id)arg1;
- (void)asynchronousDataFromURL:(id)arg1 key:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

