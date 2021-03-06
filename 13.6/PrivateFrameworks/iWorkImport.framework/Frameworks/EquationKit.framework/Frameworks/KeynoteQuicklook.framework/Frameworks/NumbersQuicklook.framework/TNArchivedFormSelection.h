//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <NumbersQuicklook/TSKArchivedSelection-Protocol.h>

@class NSString, TNFormSelection;

@interface TNArchivedFormSelection : TSPObject <TSKArchivedSelection>
{
    TNFormSelection *_selection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TNFormSelection *selection; // @synthesize selection=_selection;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

