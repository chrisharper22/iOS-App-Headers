//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class IGRightsManagerFlagInfo, NSString;

@interface IGRightsManagerFlagInfoDetailModel : NSObject <IGListDiffable>
{
    IGRightsManagerFlagInfo *_rightsManagerFlagInfo;
    NSString *_reelPK;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *reelPK; // @synthesize reelPK=_reelPK;
@property(readonly, nonatomic) IGRightsManagerFlagInfo *rightsManagerFlagInfo; // @synthesize rightsManagerFlagInfo=_rightsManagerFlagInfo;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithRightsManagerFlagInfo:(id)arg1 reelPK:(id)arg2;

@end
