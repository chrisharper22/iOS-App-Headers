//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGAutocompleteAlmostAbstractDataSource-Protocol.h"

@class IGAutocompleteBrandedContentStore, NSArray, NSString;

@interface IGBrandedContentLocalDataSource : NSObject <IGAutocompleteAlmostAbstractDataSource>
{
    IGAutocompleteBrandedContentStore *_brandedContentStore;
    NSArray *_filteredUsers;
    NSString *_query;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (id)resultForRow:(long long)arg1;
- (id)allResults;
- (unsigned long long)numberOfResults;
- (void)clearLocalData;
- (void)clearLocalDataExceptSelectedSponsors:(id)arg1;
- (id)filteredUsers;
- (id)_defaultSet;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

