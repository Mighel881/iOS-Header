//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class DirectUploadRequest;

@interface PrepareDirectUploadOperation : ISOperation
{
    CDUnknownBlockType _outputBlock;
    DirectUploadRequest *_request;
}

- (void).cxx_destruct;
- (id)_uploadURL;
- (id)_newURLRequestWithURL:(id)arg1;
- (void)run;
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithRequest:(id)arg1;

@end

