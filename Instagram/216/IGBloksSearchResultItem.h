//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class BKModel;

@interface IGBloksSearchResultItem : NSObject <IGListDiffable>
{
    BKModel *_model;
}

+ (id)newWithModel:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BKModel *model; // @synthesize model=_model;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;

@end

