//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@interface CheckForDemotedApplicationsOperation : ISOperation
{
    _Bool _hasDemotedApplications;
}

@property(readonly) _Bool hasDemotedApplications; // @synthesize hasDemotedApplications=_hasDemotedApplications;
- (void)run;
- (id)init;

@end

