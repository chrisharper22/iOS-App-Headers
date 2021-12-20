//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGSmartStickerModelType-Protocol.h>
#import <FBSharedFramework/IGStickerModelType-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSString;

@interface IGPollStickerV2TrayModel : NSObject <IGListDiffable, IGStickerModelType, IGSmartStickerModelType, NSCoding>
{
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)smartStickerType;
@property(readonly, nonatomic) _Bool includeInRecent;
@property(readonly, copy, nonatomic) NSString *pk;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

