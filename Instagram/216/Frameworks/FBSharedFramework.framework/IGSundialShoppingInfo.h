//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGShoppingFormatsProductCollectionDataModel, IGSundialShoppingParser, NSArray;

@interface IGSundialShoppingInfo : NSObject <NSCoding>
{
    IGSundialShoppingParser *_parser;
    NSArray *_products;
    IGShoppingFormatsProductCollectionDataModel *_collection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGShoppingFormatsProductCollectionDataModel *collection; // @synthesize collection=_collection;
@property(readonly, nonatomic) NSArray *products; // @synthesize products=_products;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShoppingParser:(id)arg1;
- (id)initWithDict:(id)arg1 objectStores:(id)arg2;

@end

