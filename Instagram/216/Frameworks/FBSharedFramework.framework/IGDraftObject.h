//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGDraftData;

@interface IGDraftObject : FBValueObject <NSCopying, NSCoding>
{
    _Bool _colocatedWithMedia;
    IGDraftData *_draftData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool colocatedWithMedia; // @synthesize colocatedWithMedia=_colocatedWithMedia;
@property(readonly, copy, nonatomic) IGDraftData *draftData; // @synthesize draftData=_draftData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDraftData:(id)arg1 colocatedWithMedia:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;

@end
