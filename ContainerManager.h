#import <Foundation/Foundation.h>

@interface ContainerManager : NSObject
+ (instancetype)shared;
- (BOOL)prepareLaunchEnvironmentForContainer:(NSString *)containerID intoEnv:(NSMutableDictionary *)env;
@end
