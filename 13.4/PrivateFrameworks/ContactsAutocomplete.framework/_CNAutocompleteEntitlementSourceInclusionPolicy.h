//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSourceInclusionPolicy-Protocol.h>

@class NSString;

@interface _CNAutocompleteEntitlementSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>
{
}

@property(readonly) _Bool includeSupplementalResults;
@property(readonly) _Bool includeCalendarServers;
@property(readonly) _Bool includeDirectoryServers;
@property(readonly) _Bool includePredictions;
@property(readonly) _Bool includeLocalExtensions;
@property(readonly) _Bool includeSuggestions;
@property(readonly) _Bool includeRecents;
@property(readonly) _Bool includeContacts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

