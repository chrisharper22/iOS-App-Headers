//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface IGCanvasProductListViewModel : NSObject <IGListDiffable>
{
    NSString *_identifier;
    NSMutableArray *_productViewModels;
}

- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (void)addProductViewModel:(id)arg1;
@property(readonly, nonatomic) NSArray *products;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

