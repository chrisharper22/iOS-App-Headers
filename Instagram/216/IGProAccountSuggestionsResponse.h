//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGLoadMoreResponseType-Protocol.h"

@class NSArray, NSString;

@interface IGProAccountSuggestionsResponse : NSObject <IGLoadMoreResponseType>
{
    NSString *_maxId;
    NSArray *_proAccountSuggestionsSectionModels;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *proAccountSuggestionsSectionModels; // @synthesize proAccountSuggestionsSectionModels=_proAccountSuggestionsSectionModels;
- (id)maxId;
- (id)initWithProAccountSuggestionsSectionModel:(id)arg1 maxId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

