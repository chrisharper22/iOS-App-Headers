//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class IGUser;

@interface IGMultipleProfileDataModel : NSObject <IGListDiffable>
{
    IGUser *_user;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (id)diffIdentifier;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)initWithUser:(id)arg1;

@end

