//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IGShoppingFiltersAnalyticsContext : NSObject
{
    NSString *_sortBy;
    NSDictionary *_filters;
    NSString *_surfaceCategoryId;
    NSString *_searchSessionId;
    NSString *_queryText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
@property(readonly, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
@property(readonly, nonatomic) NSString *surfaceCategoryId; // @synthesize surfaceCategoryId=_surfaceCategoryId;
@property(readonly, nonatomic) NSDictionary *filters; // @synthesize filters=_filters;
@property(readonly, nonatomic) NSString *sortBy; // @synthesize sortBy=_sortBy;
- (id)initWithSortBy:(id)arg1 filters:(id)arg2 surfaceCategoryId:(id)arg3 searchSessionId:(id)arg4 queryText:(id)arg5;

@end

