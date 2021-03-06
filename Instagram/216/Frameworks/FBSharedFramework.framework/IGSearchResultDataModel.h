//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGSearchableItem;

@interface IGSearchResultDataModel : NSObject
{
    id <IGSearchableItem> _searchableItem;
    NSString *_sectionType;
    NSString *_subtitle;
}

+ (id)searchResultDataModelsForSearchObjects:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, nonatomic) id <IGSearchableItem> searchableItem; // @synthesize searchableItem=_searchableItem;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSearchableItem:(id)arg1 sectionType:(id)arg2 subtitle:(id)arg3;

@end

