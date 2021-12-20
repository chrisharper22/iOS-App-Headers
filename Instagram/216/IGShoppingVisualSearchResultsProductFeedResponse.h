//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IGShoppingVisualSearchResultsProductFeedResponse : FBValueObject <NSCopying, NSCoding>
{
    _Bool _moreAvailable;
    NSArray *_items;
    NSString *_paginationToken;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *paginationToken; // @synthesize paginationToken=_paginationToken;
@property(readonly, nonatomic) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1 moreAvailable:(_Bool)arg2 paginationToken:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

