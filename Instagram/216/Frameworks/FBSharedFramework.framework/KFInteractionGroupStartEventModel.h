//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/KFEventModel.h>

@class NSString;

@interface KFInteractionGroupStartEventModel : KFEventModel
{
    NSString *_groupName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)createEventWithInteractivityToolbox:(id)arg1;
- (id)initWithGroupName:(id)arg1;

@end

