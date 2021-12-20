//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGDirectMutationRequestDropReason, IGDirectMutationRequestExecutionState;

@interface IGDirectMutationRequestStoreHistoricalDebugLogEvent : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGDirectMutationRequestExecutionState *_enqueued_initialExecutionState;
    IGDirectMutationRequestExecutionState *_updated_fromExecutionState;
    IGDirectMutationRequestExecutionState *_updated_toExecutionState;
    IGDirectMutationRequestDropReason *_dropped_reason;
}

+ (id)updatedWithFromExecutionState:(id)arg1 toExecutionState:(id)arg2;
+ (id)enqueuedWithInitialExecutionState:(id)arg1;
+ (id)droppedWithReason:(id)arg1;
- (void).cxx_destruct;
- (void)matchEnqueued:(CDUnknownBlockType)arg1 updated:(CDUnknownBlockType)arg2 dropped:(CDUnknownBlockType)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

