//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface TSUSafeSaveAssistant : NSObject
{
    NSURL *_saveURL;
    NSURL *_temporaryDirectoryURL;
    NSURL *_writeURL;
}

+ (void)removeTemporaryDirectoryAtURL:(id)arg1;
+ (_Bool)finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id *)arg4;
+ (void)writeAttributes:(id)arg1 toURL:(id)arg2;
+ (id)temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSURL *writeURL; // @synthesize writeURL=_writeURL;
- (void).cxx_destruct;
- (void)removeTemporaryDirectory;
- (_Bool)endSaveWithSuccess:(_Bool)arg1 toURL:(id)arg2 addingAttributes:(id)arg3 error:(id *)arg4;
- (_Bool)endSaveWithSuccess:(_Bool)arg1 addingAttributes:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initForSavingToURL:(id)arg1 error:(id *)arg2;
- (id)init;

@end

