//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol VUILibraryDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryDataSource : NSObject
{
    _Bool _hasCompletedInitialFetch;
    id <VUILibraryDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasCompletedInitialFetch; // @synthesize hasCompletedInitialFetch=_hasCompletedInitialFetch;
@property(nonatomic) __weak id <VUILibraryDataSourceDelegate> delegate; // @synthesize delegate=_delegate;

@end

