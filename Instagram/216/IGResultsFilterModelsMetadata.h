//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;

@interface IGResultsFilterModelsMetadata : NSObject <NSCopying>
{
    NSMutableDictionary *_filterAttributeTypeToModel;
    NSMutableDictionary *_filterAttributeTypeToDiffIdentifierToModel;
    NSString *_identifier;
    NSArray *_filterConfigs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *filterConfigs; // @synthesize filterConfigs=_filterConfigs;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)removeAllItems;
- (void)setSelectedItem:(id)arg1;
- (void)removeSelectedItem:(id)arg1;
- (id)getSelectedItemForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedItems;
- (void)renewIdentifier;
- (id)initWithFilterConfigs:(id)arg1;

@end

