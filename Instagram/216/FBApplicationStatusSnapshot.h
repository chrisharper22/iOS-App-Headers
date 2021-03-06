//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface FBApplicationStatusSnapshot : FBValueObject <NSCopying, NSCoding>
{
    _Bool _lowPowerModeEnabled;
    unsigned long long _freeMemory;
    unsigned long long _evictableMemory;
    unsigned long long _residentMemory;
    unsigned long long _peakResidentMemory;
    unsigned long long _dirtyMemory;
    unsigned long long _virtualMemory;
    unsigned long long _compressedMemory;
    unsigned long long _freeDiskSpace;
    unsigned long long _bytesSent;
    unsigned long long _bytesReceived;
    unsigned long long _loginCount;
    double _timestamp;
    double _timeSinceInit;
    double _activeTimeSinceInit;
    double _backgroundTimeSinceInit;
    double _timeSinceLastMemoryWarning;
    double _timeSinceLastBackgrounding;
    double _timeSinceLastForegrounding;
    double _battery;
    NSString *_batteryState;
    double _lastModuleTimestamp;
    NSString *_lastModuleClassName;
    NSString *_lastModuleName;
    NSString *_lastModuleEntityType;
    unsigned long long _numberOfMemoryWarnings;
    NSString *_moduleActiveOnLastMemoryWarning;
    long long _numberOfBackgroundTasks;
    NSString *_thermalState;
    NSString *_connectionType;
    NSString *_connectionLatencyState;
    NSDictionary *_pluginData;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *pluginData; // @synthesize pluginData=_pluginData;
@property(readonly, copy, nonatomic) NSString *connectionLatencyState; // @synthesize connectionLatencyState=_connectionLatencyState;
@property(readonly, copy, nonatomic) NSString *connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, copy, nonatomic) NSString *thermalState; // @synthesize thermalState=_thermalState;
@property(readonly, nonatomic) long long numberOfBackgroundTasks; // @synthesize numberOfBackgroundTasks=_numberOfBackgroundTasks;
@property(readonly, copy, nonatomic) NSString *moduleActiveOnLastMemoryWarning; // @synthesize moduleActiveOnLastMemoryWarning=_moduleActiveOnLastMemoryWarning;
@property(readonly, nonatomic) unsigned long long numberOfMemoryWarnings; // @synthesize numberOfMemoryWarnings=_numberOfMemoryWarnings;
@property(readonly, copy, nonatomic) NSString *lastModuleEntityType; // @synthesize lastModuleEntityType=_lastModuleEntityType;
@property(readonly, copy, nonatomic) NSString *lastModuleName; // @synthesize lastModuleName=_lastModuleName;
@property(readonly, copy, nonatomic) NSString *lastModuleClassName; // @synthesize lastModuleClassName=_lastModuleClassName;
@property(readonly, nonatomic) double lastModuleTimestamp; // @synthesize lastModuleTimestamp=_lastModuleTimestamp;
@property(readonly, nonatomic) _Bool lowPowerModeEnabled; // @synthesize lowPowerModeEnabled=_lowPowerModeEnabled;
@property(readonly, copy, nonatomic) NSString *batteryState; // @synthesize batteryState=_batteryState;
@property(readonly, nonatomic) double battery; // @synthesize battery=_battery;
@property(readonly, nonatomic) double timeSinceLastForegrounding; // @synthesize timeSinceLastForegrounding=_timeSinceLastForegrounding;
@property(readonly, nonatomic) double timeSinceLastBackgrounding; // @synthesize timeSinceLastBackgrounding=_timeSinceLastBackgrounding;
@property(readonly, nonatomic) double timeSinceLastMemoryWarning; // @synthesize timeSinceLastMemoryWarning=_timeSinceLastMemoryWarning;
@property(readonly, nonatomic) double backgroundTimeSinceInit; // @synthesize backgroundTimeSinceInit=_backgroundTimeSinceInit;
@property(readonly, nonatomic) double activeTimeSinceInit; // @synthesize activeTimeSinceInit=_activeTimeSinceInit;
@property(readonly, nonatomic) double timeSinceInit; // @synthesize timeSinceInit=_timeSinceInit;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned long long loginCount; // @synthesize loginCount=_loginCount;
@property(readonly, nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(readonly, nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property(readonly, nonatomic) unsigned long long freeDiskSpace; // @synthesize freeDiskSpace=_freeDiskSpace;
@property(readonly, nonatomic) unsigned long long compressedMemory; // @synthesize compressedMemory=_compressedMemory;
@property(readonly, nonatomic) unsigned long long virtualMemory; // @synthesize virtualMemory=_virtualMemory;
@property(readonly, nonatomic) unsigned long long dirtyMemory; // @synthesize dirtyMemory=_dirtyMemory;
@property(readonly, nonatomic) unsigned long long peakResidentMemory; // @synthesize peakResidentMemory=_peakResidentMemory;
@property(readonly, nonatomic) unsigned long long residentMemory; // @synthesize residentMemory=_residentMemory;
@property(readonly, nonatomic) unsigned long long evictableMemory; // @synthesize evictableMemory=_evictableMemory;
@property(readonly, nonatomic) unsigned long long freeMemory; // @synthesize freeMemory=_freeMemory;
- (id)initWithFreeMemory:(unsigned long long)arg1 evictableMemory:(unsigned long long)arg2 residentMemory:(unsigned long long)arg3 peakResidentMemory:(unsigned long long)arg4 dirtyMemory:(unsigned long long)arg5 virtualMemory:(unsigned long long)arg6 compressedMemory:(unsigned long long)arg7 freeDiskSpace:(unsigned long long)arg8 bytesSent:(unsigned long long)arg9 bytesReceived:(unsigned long long)arg10 loginCount:(unsigned long long)arg11 timestamp:(double)arg12 timeSinceInit:(double)arg13 activeTimeSinceInit:(double)arg14 backgroundTimeSinceInit:(double)arg15 timeSinceLastMemoryWarning:(double)arg16 timeSinceLastBackgrounding:(double)arg17 timeSinceLastForegrounding:(double)arg18 battery:(double)arg19 batteryState:(id)arg20 lowPowerModeEnabled:(_Bool)arg21 lastModuleTimestamp:(double)arg22 lastModuleClassName:(id)arg23 lastModuleName:(id)arg24 lastModuleEntityType:(id)arg25 numberOfMemoryWarnings:(unsigned long long)arg26 moduleActiveOnLastMemoryWarning:(id)arg27 numberOfBackgroundTasks:(long long)arg28 thermalState:(id)arg29 connectionType:(id)arg30 connectionLatencyState:(id)arg31 pluginData:(id)arg32;

@end

