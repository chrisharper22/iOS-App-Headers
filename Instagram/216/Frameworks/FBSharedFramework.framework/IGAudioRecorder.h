//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/AVAudioRecorderDelegate-Protocol.h>

@class IGTuple, NSMutableSet, NSString;

@interface IGAudioRecorder : NSObject <AVAudioRecorderDelegate>
{
    IGTuple *_activeRecordingSession;
    NSMutableSet *_pendingRecordingSessions;
}

- (void).cxx_destruct;
- (void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (id)_newAudioRecordingSession;
@property(readonly, nonatomic) _Bool isRecording;
- (id)stopRecording;
- (_Bool)startRecording;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

